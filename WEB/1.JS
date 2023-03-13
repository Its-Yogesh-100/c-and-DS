const postContainer = document.querySelector(".post-container");
const postForm = document.querySelector(".post-form");

postForm.addEventListener("submit", (event) => {
  event.preventDefault();

  const postText = postForm.querySelector("textarea").value;

  const post = document.createElement("div");
  post.innerHTML = `
    <p>${postText}</p>
    <button class="delete-button">Delete</button>
  `;

  postContainer.prepend(post);

  postForm.querySelector("textarea").value = "";
});

postContainer.addEventListener("click", (event) => {
  if (event.target.classList.contains("delete-button")) {
    event.target.parentElement.remove();
  }
});
