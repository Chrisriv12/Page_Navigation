namespace Page_Navigation;

public partial class MessagePage : ContentPage
{
    public MessagePage(string message)
    {
        InitializeComponent();
        if (!string.IsNullOrEmpty(message))
        {
            lblMessage.Text = message;
        }
        else
        {
            lblMessage.Text = "No message received.";
        }
    }

    private void OnGoBackClicked(object sender, EventArgs e)
    {
        // Navigate back to the previous page
        Navigation.PopAsync();
    }
}

