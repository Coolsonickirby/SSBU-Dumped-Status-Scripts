
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueClayrocket::status::Ready_pre(L2CWeaponShizueClayrocket *this,L2CValue *return_value)

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
  int in_stack_fffffffffffffee4;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,_SITUATION_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_KINETIC_TYPE_NORMAL);
  lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_GROUND);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack232,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack264,0);
  SVar2 = lib::L2CValue::as_integer(aLStack136);
  iVar3 = lib::L2CValue::as_integer(aLStack152);
  uVar4 = lib::L2CValue::as_integer(aLStack168);
  GVar5 = lib::L2CValue::as_integer(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack200);
  iVar6 = lib::L2CValue::as_integer(aLStack216);
  iVar7 = lib::L2CValue::as_integer(aLStack232);
  iVar8 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack264);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar2,iVar3,uVar4,GVar5,(bool)(bVar1 & 1),iVar6,iVar7,iVar8,
             in_stack_fffffffffffffee4);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack152,0x10d78ab4d3);
  lib::L2CValue::L2CValue(aLStack168,0xa677aa728);
  uVar9 = lib::L2CValue::as_integer(aLStack152);
  uVar10 = lib::L2CValue::as_integer(aLStack168);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack136,iVar3);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0xa677aa728);
  lib::L2CValue::operator_(pLVar11,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0x10d78ab4d3);
  lib::L2CValue::L2CValue(aLStack168,0x6667a9b0b);
  uVar9 = lib::L2CValue::as_integer(aLStack152);
  uVar10 = lib::L2CValue::as_integer(aLStack168);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack136,fVar12);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0x419cd3efe);
  lib::L2CValue::operator_(pLVar11,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack136,0.0);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_SHIZUE_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DAMAGE);
  fVar12 = (float)lib::L2CValue::as_number(aLStack136);
  iVar3 = lib::L2CValue::as_integer(aLStack152);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar3);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

