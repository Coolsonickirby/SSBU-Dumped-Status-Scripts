
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaTriforce::status::Failure_pre(L2CWeaponZeldaTriforce *this,L2CValue *return_value)

{
  byte bVar1;
  SituationKind SVar2;
  int iVar3;
  uint uVar4;
  GroundCliffCheckKind GVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  float fVar12;
  int in_stack_fffffffffffffef4;
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_KINETIC_TYPE_STOP);
  lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CLIFF_CHECK_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,_WEAPON_STATUS_WORK_KEEP_FLAG_ALL_FLAG);
  lib::L2CValue::L2CValue(aLStack216,_WEAPON_STATUS_WORK_KEEP_FLAG_ALL_INT);
  lib::L2CValue::L2CValue(aLStack232,_WEAPON_STATUS_WORK_KEEP_FLAG_ALL_FLOAT);
  lib::L2CValue::L2CValue(aLStack248,0);
  SVar2 = lib::L2CValue::as_integer(aLStack120);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  uVar4 = lib::L2CValue::as_integer(aLStack152);
  GVar5 = lib::L2CValue::as_integer(aLStack168);
  bVar1 = lib::L2CValue::as_bool(aLStack184);
  iVar6 = lib::L2CValue::as_integer(aLStack200);
  iVar7 = lib::L2CValue::as_integer(aLStack216);
  iVar8 = lib::L2CValue::as_integer(aLStack232);
  lib::L2CValue::as_integer(aLStack248);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar2,iVar3,uVar4,GVar5,(bool)(bVar1 & 1),iVar6,iVar7,iVar8,
             in_stack_fffffffffffffef4);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack136,0xe1534ea62);
  lib::L2CValue::L2CValue(aLStack152,0xb38b339df);
  uVar9 = lib::L2CValue::as_integer(aLStack136);
  uVar10 = lib::L2CValue::as_integer(aLStack152);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack120,fVar12);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xb38b339df);
  lib::L2CValue::operator_(pLVar11,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,0xe1534ea62);
  lib::L2CValue::L2CValue(aLStack152,0xf7ef86076);
  uVar9 = lib::L2CValue::as_integer(aLStack136);
  uVar10 = lib::L2CValue::as_integer(aLStack152);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack120,iVar3);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xf7ef86076);
  lib::L2CValue::operator_(pLVar11,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

