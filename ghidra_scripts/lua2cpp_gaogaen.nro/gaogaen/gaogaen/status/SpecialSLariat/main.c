
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialSLariat_main(L2CFighterGaogaen *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
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
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x14e5b2d234);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1064075d74);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_BUTTON_PUSH_POS_X);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_AREA_HIT_POS_X);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = aLStack112;
  lib::L2CValue::operator_(aLStack96,pLVar4);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_AREA_LENGTH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack192,0x20bde8bee2);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  uVar7 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack208,0x2081e581bb);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  uVar7 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  lib::L2CValue::operator_(aLStack224,aLStack160);
  lib::L2CValue::operator_(aLStack80,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  fVar8 = (float)lib::L2CValue::as_number(aLStack192);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar8);
  lib::L2CValue::L2CValue(aLStack208,true);
  FUN_710001d4b0(this,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,SpecialSLariat_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

