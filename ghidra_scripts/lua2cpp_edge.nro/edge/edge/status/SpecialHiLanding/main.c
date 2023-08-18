
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiLanding_main(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  KineticEnergy *pKVar5;
  L2CValue *this_00;
  KineticEnergyNormal *pKVar6;
  Hash40 HVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  L2CValue aLStack320 [16];
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
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_CHARGED_RUSH);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_USE_LANDING_SPEED_MUL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,0x12053d3788);
    lib::L2CValue::L2CValue(aLStack176,aLStack128);
    FUN_7100014a20(aLStack288,this,aLStack160,aLStack176);
    lib::L2CValue::operator_(aLStack144,aLStack288);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0x1359d88780);
    lib::L2CValue::L2CValue(aLStack176,aLStack128);
    FUN_7100014a20(aLStack288,this,aLStack160,aLStack176);
    lib::L2CValue::operator_(aLStack144,aLStack288);
  }
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack208,0xf716ffff8);
  lib::L2CValue::L2CValue(aLStack224,aLStack128);
  FUN_7100014a20(aLStack192,this,aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack240,pvVar4);
  lib::L2CValue::_L2CValue(aLStack288);
  pKVar5 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack240);
  uVar11 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar5);
  lib::L2CValue::L2CValue(aLStack288,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack288);
  lib::L2CValue::L2CValue(aLStack112,aLStack272);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
  lib::L2CValue::operator_(this_00,aLStack144);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  uVar12 = lib::L2CValue::as_number(aLStack112);
  uVar8 = lib::L2CValue::as_number(aLStack304);
  local_60 = uVar12 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack88 = 0;
  pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack240);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar6,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar12 = lib::L2CValue::as_number(aLStack192);
  uVar8 = lib::L2CValue::as_number(aLStack112);
  local_60 = uVar12 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack88 = 0;
  pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack240);
  app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar6,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf2250bb9a);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    lib::L2CValue::L2CValue(aLStack320,false);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack304);
    bVar1 = lib::L2CValue::as_bool(aLStack320);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf65f0c14a);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    lib::L2CValue::L2CValue(aLStack320,false);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack304);
    bVar1 = lib::L2CValue::as_bool(aLStack320);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialHiLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

