
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialSLanding_main(L2CFighterKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
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
  
  fVar6 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_SPECIAL_S_WORK_FLOAT_START_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar3 = lib::L2CValue::operator_(aLStack96,aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack192,0x1f641af730);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar6);
    lib::L2CValue::L2CValue(aLStack80,10.0);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    uVar3 = lib::L2CValue::operator_(aLStack144,aLStack128);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator_(aLStack128,aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack224,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack240,0x1a55985405);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::operator_(aLStack192,aLStack256);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack80,aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,0x11bf9ca033);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialSLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

