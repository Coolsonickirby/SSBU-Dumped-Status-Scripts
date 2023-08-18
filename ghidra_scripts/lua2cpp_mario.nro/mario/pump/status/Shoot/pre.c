
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioPump::status::Shoot_pre(L2CWeaponMarioPump *this,L2CValue *return_value)

{
  byte bVar1;
  SituationKind SVar2;
  int iVar3;
  uint uVar4;
  GroundCliffCheckKind GVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_KINETIC_TYPE_NONE);
  lib::L2CValue::L2CValue(aLStack152,_GROUND_CORRECT_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,false);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,0);
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
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  fVar9 = (float)app::lua_bind::LinkModule__get_parent_lr_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack120,fVar9);
  fVar9 = (float)lib::L2CValue::as_number(aLStack120);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

