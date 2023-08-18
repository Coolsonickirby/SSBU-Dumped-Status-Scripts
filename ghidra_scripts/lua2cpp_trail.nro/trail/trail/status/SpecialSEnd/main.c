
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialSEnd_main(L2CFighterTrail *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack256 [16];
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
  
  lib::L2CValue::L2CValue(aLStack112,0xdb8bd3614);
  lib::L2CValue::L2CValue(aLStack128,0x1158d0953d);
  lib::L2CValue::L2CValue(aLStack144,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,true);
  FUN_71000222a0(this);
  lib::L2CValue::_L2CValue(aLStack160);
  FUN_71000223d0(this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_ATTACK_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar3 = lib::L2CValue::operator__(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar3 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xb07de03e7);
      lib::L2CValue::operator_(aLStack192,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb70d93371);
      lib::L2CValue::operator_(aLStack192,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xbe9d062cb);
    lib::L2CValue::operator_(aLStack192,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack208,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar2 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,uVar2);
  lib::L2CValue::operator_(aLStack256,aLStack208);
  lib::L2CValue::L2CValue(aLStack80,0.01);
  lib::L2CValue::operator_(aLStack240,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar5 = (float)lib::L2CValue::as_number(aLStack224);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack240,fVar5);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack240,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_BACK_ANGLE);
  fVar5 = (float)lib::L2CValue::as_number(aLStack224);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  FUN_7100022d80(this);
  lib::L2CValue::L2CValue(aLStack80,SpecialSEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

