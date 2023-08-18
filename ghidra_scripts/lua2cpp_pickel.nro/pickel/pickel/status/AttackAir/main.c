
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::AttackAir_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_air(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  bVar1 = app::FighterSpecializer_Pickel::is_have_tool(pBVar7);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  HVar8 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,HVar8);
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar9 = lib::L2CValue::operator__(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xc3495ada5);
    uVar9 = lib::L2CValue::operator__(aLStack160,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0x1278b290b3);
      lib::L2CValue::operator_(aLStack176,aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0x128cfdb4a0);
      lib::L2CValue::operator_(aLStack176,aLStack128);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0xc3495ada5);
    uVar9 = lib::L2CValue::operator__(aLStack160,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0x10a6226c40);
      lib::L2CValue::operator_(aLStack176,aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0x1053a2ca80);
      lib::L2CValue::operator_(aLStack176,aLStack128);
    }
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_ATTACK_AIR_FLAG_HAVE_TOOL);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,1.0);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,false);
  lib::L2CValue::L2CValue(aLStack288,true);
  lib::L2CValue::L2CValue(aLStack304,true);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  HVar8 = lib::L2CValue::as_hash(aLStack176);
  fVar10 = (float)lib::L2CValue::as_number(aLStack192);
  fVar11 = (float)lib::L2CValue::as_number(aLStack208);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  bVar2 = lib::L2CValue::as_bool(aLStack240);
  fVar12 = (float)lib::L2CValue::as_number(aLStack256);
  bVar3 = lib::L2CValue::as_bool(aLStack272);
  bVar4 = lib::L2CValue::as_bool(aLStack288);
  bVar5 = lib::L2CValue::as_bool(aLStack304);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar6,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
             fVar12,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,AttackAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

