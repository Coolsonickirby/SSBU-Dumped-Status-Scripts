
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::Attack_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_NEXT_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar6);
    lib::L2CValue::L2CValue(aLStack64,0x9055b74c4);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_FLAG_FLASH_PUNCH);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_FLASH_PUNCH);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_71000468f8;
        }
      }
      lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          this_00 = aLStack96;
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_FLAG_ENABLE_COMBO);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack64,true);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) goto LAB_71000467e0;
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_COMBO);
          lib::L2CValue::operator_(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_NEXT_STATUS)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          this_00 = aLStack64;
        }
        lib::L2CValue::_L2CValue(this_00);
      }
    }
  }
LAB_71000467e0:
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_FLAG_CHANGE_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_FLAG_CHANGE_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_COMBO);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_COMBO);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000468f8;
    }
  }
  lua2cpp::L2CFighterCommon::status_Attack_Main(this);
LAB_71000468f8:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

