
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopa::status::SpecialSJump_main(L2CFighterKoopa *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  uVar7 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_SPECIAL_S_WORK_FLOAT_START_Y);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,0xe01b71074);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar4 = lib::L2CValue::as_hash(aLStack128);
  fVar5 = (float)lib::L2CValue::as_number(aLStack144);
  fVar6 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialSJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

