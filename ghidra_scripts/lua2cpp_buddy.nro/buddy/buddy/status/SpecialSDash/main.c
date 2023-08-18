
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSDash_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_CLIFF_CHECK);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100020f90(this);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_CURRENT);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLOAT_GROUND_DEGREE_PREV);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
            (this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_71000214a0(this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100022790(this);
  FUN_71000231a0(this);
  lib::L2CValue::L2CValue(aLStack176,0xe3d6acb62);
  lib::L2CValue::L2CValue(aLStack192,0x127f383ead);
  lib::L2CValue::L2CValue(aLStack208,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_REMAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack224,iVar1);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar2 = lib::L2CValue::operator_(aLStack80,aLStack224);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_REMAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,SpecialSDash_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

