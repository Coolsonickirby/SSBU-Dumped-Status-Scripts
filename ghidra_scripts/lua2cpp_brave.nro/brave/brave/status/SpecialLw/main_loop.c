
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLw_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x10ef97f71f);
  lib::L2CValue::L2CValue(aLStack128,0x146e22785f);
  lib::L2CValue::L2CValue(aLStack144,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_SELECT);
    lib::L2CValue::L2CValue(aLStack176,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar3 = 1;
    goto LAB_710002849c;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_DECIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack176);
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
        lib::L2CValue::operator_(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar4 = lib::L2CValue::operator__(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar4 & 1) != 0) goto LAB_7100028328;
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
      app::FighterSpecializer_Brave::special_lw_cursor_decide(pFVar6);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_GUARD_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_JUMP_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
LAB_7100028328:
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_DECIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      FUN_7100027810(aLStack80,this);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_GUARD);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_GUARD_CANCEL);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_JUMP_CANCEL);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack176);
      }
    }
  }
  iVar3 = 0;
LAB_710002849c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

