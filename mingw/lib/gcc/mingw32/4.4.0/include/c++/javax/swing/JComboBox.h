
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JComboBox__
#define __javax_swing_JComboBox__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
          class ActionListener;
          class ItemEvent;
          class ItemListener;
          class KeyEvent;
      }
    }
    namespace beans
    {
        class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class Action;
        class ComboBoxEditor;
        class ComboBoxModel;
        class JComboBox;
        class JComboBox$KeySelectionManager;
        class ListCellRenderer;
      namespace event
      {
          class ListDataEvent;
          class PopupMenuListener;
      }
      namespace plaf
      {
          class ComboBoxUI;
      }
    }
  }
}

class javax::swing::JComboBox : public ::javax::swing::JComponent
{

public:
  JComboBox(::javax::swing::ComboBoxModel *);
  JComboBox(JArray< ::java::lang::Object * > *);
  JComboBox(::java::util::Vector *);
  JComboBox();
  virtual jboolean isEditable();
public: // actually protected
  virtual void installAncestorListener();
public:
  virtual void setUI(::javax::swing::plaf::ComboBoxUI *);
  virtual void updateUI();
  virtual ::java::lang::String * getUIClassID();
  virtual ::javax::swing::plaf::ComboBoxUI * getUI();
  virtual void setModel(::javax::swing::ComboBoxModel *);
  virtual ::javax::swing::ComboBoxModel * getModel();
  virtual void setLightWeightPopupEnabled(jboolean);
  virtual jboolean isLightWeightPopupEnabled();
  virtual void setEditable(jboolean);
  virtual void setMaximumRowCount(jint);
  virtual jint getMaximumRowCount();
  virtual void setRenderer(::javax::swing::ListCellRenderer *);
  virtual ::javax::swing::ListCellRenderer * getRenderer();
  virtual void setEditor(::javax::swing::ComboBoxEditor *);
  virtual ::javax::swing::ComboBoxEditor * getEditor();
  virtual void setSelectedItem(::java::lang::Object *);
  virtual ::java::lang::Object * getSelectedItem();
  virtual void setSelectedIndex(jint);
  virtual jint getSelectedIndex();
  virtual ::java::lang::Object * getPrototypeDisplayValue();
  virtual void setPrototypeDisplayValue(::java::lang::Object *);
  virtual void addItem(::java::lang::Object *);
  virtual void insertItemAt(::java::lang::Object *, jint);
  virtual void removeItem(::java::lang::Object *);
  virtual void removeItemAt(jint);
  virtual void removeAllItems();
  virtual void showPopup();
  virtual void hidePopup();
  virtual void setPopupVisible(jboolean);
  virtual jboolean isPopupVisible();
  virtual void setActionCommand(::java::lang::String *);
  virtual ::java::lang::String * getActionCommand();
  virtual void setAction(::javax::swing::Action *);
  virtual ::javax::swing::Action * getAction();
public: // actually protected
  virtual void configurePropertiesFromAction(::javax::swing::Action *);
  virtual ::java::beans::PropertyChangeListener * createActionPropertyChangeListener(::javax::swing::Action *);
  virtual void fireItemStateChanged(::java::awt::event::ItemEvent *);
  virtual void fireActionEvent();
public:
  virtual void firePopupMenuCanceled();
  virtual void firePopupMenuWillBecomeInvisible();
  virtual void firePopupMenuWillBecomeVisible();
public: // actually protected
  virtual void selectedItemChanged();
public:
  virtual JArray< ::java::lang::Object * > * getSelectedObjects();
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
  virtual jboolean selectWithKeyChar(jchar);
  virtual void intervalAdded(::javax::swing::event::ListDataEvent *);
  virtual void intervalRemoved(::javax::swing::event::ListDataEvent *);
  virtual void contentsChanged(::javax::swing::event::ListDataEvent *);
  virtual void setEnabled(jboolean);
  virtual void configureEditor(::javax::swing::ComboBoxEditor *, ::java::lang::Object *);
  virtual void processKeyEvent(::java::awt::event::KeyEvent *);
  virtual void setKeySelectionManager(::javax::swing::JComboBox$KeySelectionManager *);
  virtual ::javax::swing::JComboBox$KeySelectionManager * getKeySelectionManager();
  virtual jint getItemCount();
  virtual ::java::lang::Object * getItemAt(jint);
public: // actually protected
  virtual ::javax::swing::JComboBox$KeySelectionManager * createDefaultKeySelectionManager();
  virtual ::java::lang::String * paramString();
public:
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  virtual void addActionListener(::java::awt::event::ActionListener *);
  virtual void removeActionListener(::java::awt::event::ActionListener *);
  virtual JArray< ::java::awt::event::ActionListener * > * getActionListeners();
  virtual void addItemListener(::java::awt::event::ItemListener *);
  virtual void removeItemListener(::java::awt::event::ItemListener *);
  virtual JArray< ::java::awt::event::ItemListener * > * getItemListeners();
  virtual void addPopupMenuListener(::javax::swing::event::PopupMenuListener *);
  virtual void removePopupMenuListener(::javax::swing::event::PopupMenuListener *);
  virtual JArray< ::javax::swing::event::PopupMenuListener * > * getPopupMenuListeners();
private:
  static const jlong serialVersionUID = 5654585963292734470LL;
  static const jint DEFAULT_MAXIMUM_ROW_COUNT = 8;
public: // actually protected
  ::javax::swing::ComboBoxModel * __attribute__((aligned(__alignof__( ::javax::swing::JComponent)))) dataModel;
  ::javax::swing::ListCellRenderer * renderer;
  ::javax::swing::ComboBoxEditor * editor;
  jint maximumRowCount;
  jboolean isEditable__;
  ::java::lang::Object * selectedItemReminder;
  ::javax::swing::JComboBox$KeySelectionManager * keySelectionManager;
  ::java::lang::String * actionCommand;
  jboolean lightWeightPopupEnabled;
private:
  ::javax::swing::Action * action;
  ::java::lang::Object * prototypeDisplayValue;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JComboBox__
