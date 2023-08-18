
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponElementDiver::status::FinalStart_main(L2CWeaponElementDiver *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_AIR_START);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,lVar5);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_START);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,lVar5);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_PARENT_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_ELIGHT);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack112,0xba24ca234);
    lib::L2CValue::L2CValue(aLStack128,0x167812a8d6);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    app::WeaponSpecializer_ElementDiver::set_energy_motion_speed_mul(pBVar8,fVar9);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,FinalStart_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

