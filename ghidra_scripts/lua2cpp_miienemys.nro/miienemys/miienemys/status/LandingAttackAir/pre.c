
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiienemys::status::LandingAttackAir_pre(L2CFighterMiienemys *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  SituationKind SVar6;
  uint uVar7;
  GroundCliffCheckKind GVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint in_stack_fffffffffffffee4;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar5 = lib::L2CValue::as_integer(aLStack120);
  lVar13 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack136,lVar13);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,0xec50d73a9);
  uVar14 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar14 & 1) == 0) {
    lua2cpp::L2CFighterCommon::status_pre_LandingAttackAir(this);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_KINETIC_TYPE_MOTION);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack184,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack200,true);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_WORK_KEEP_FLAG_LANDING_ATTACK_AIR_FLAG);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_WORK_KEEP_FLAG_LANDING_ATTACK_AIR_INT);
    lib::L2CValue::L2CValue(aLStack248,_FIGHTER_STATUS_WORK_KEEP_FLAG_LANDING_ATTACK_AIR_FLOAT);
    lib::L2CValue::L2CValue(aLStack264,0);
    SVar6 = lib::L2CValue::as_integer(aLStack120);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    uVar7 = lib::L2CValue::as_integer(aLStack168);
    GVar8 = lib::L2CValue::as_integer(aLStack184);
    bVar1 = lib::L2CValue::as_bool(aLStack200);
    iVar9 = lib::L2CValue::as_integer(aLStack216);
    iVar10 = lib::L2CValue::as_integer(aLStack232);
    iVar11 = lib::L2CValue::as_integer(aLStack248);
    lib::L2CValue::as_integer(aLStack264);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar6,iVar5,uVar7,GVar8,(bool)(bVar1 & 1),iVar9,iVar10,iVar11,
               in_stack_fffffffffffffee4);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(aLStack120,true);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_TREADED_KIND_ENABLE);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack184,false);
    lib::L2CValue::L2CValue(aLStack200,false);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_STATUS_ATTR_INTO_DOOR);
    lib::L2CValue::L2CValue(aLStack248,_FIGHTER_POWER_UP_ATTACK_BIT_ATTACK_AIR);
    lib::L2CValue::L2CValue(aLStack264,0);
    bVar1 = lib::L2CValue::as_bool(aLStack120);
    iVar5 = lib::L2CValue::as_integer(aLStack152);
    bVar2 = lib::L2CValue::as_bool(aLStack168);
    bVar3 = lib::L2CValue::as_bool(aLStack184);
    bVar4 = lib::L2CValue::as_bool(aLStack200);
    uVar14 = lib::L2CValue::as_integer(aLStack216);
    uVar7 = lib::L2CValue::as_integer(aLStack232);
    uVar12 = lib::L2CValue::as_integer(aLStack248);
    lib::L2CValue::as_integer(aLStack264);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (this->moduleAccessor,(bool)(bVar1 & 1),iVar5,(bool)(bVar2 & 1),(bool)(bVar3 & 1),
               (bool)(bVar4 & 1),uVar14,uVar7,uVar12,in_stack_fffffffffffffee4);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

