
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100025150(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(this_00,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        iVar2 = 0;
        goto LAB_7100025344;
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack80,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DONKEY_STATUS_KIND_SUPER_LIFT_LANDING);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ITEM_THROW_HEAVY);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  iVar2 = 1;
LAB_7100025344:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

