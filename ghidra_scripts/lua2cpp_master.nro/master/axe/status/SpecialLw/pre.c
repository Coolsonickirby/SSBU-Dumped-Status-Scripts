
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterAxe::status::SpecialLw_pre(L2CWeaponMasterAxe *this,L2CValue *return_value)

{
  byte bVar1;
  SituationKind SVar2;
  int iVar3;
  uint uVar4;
  GroundCliffCheckKind GVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  L2CValue *this_00;
  ulong uVar9;
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
  
  lib::L2CValue::L2CValue(aLStack136,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack120,_WEAPON_MASTER_AXE_STATUS_KIND_SPECIAL_LW_TURN);
  uVar9 = lib::L2CValue::operator__(this_00,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack120,_FS_SUCCEEDS_KEEP_EFFECT);
    lib::L2CValue::operator_(aLStack136,aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_KINETIC_TYPE_NONE);
  lib::L2CValue::L2CValue(aLStack168,_GROUND_CORRECT_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,false);
  lib::L2CValue::L2CValue(aLStack216,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack232,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  SVar2 = lib::L2CValue::as_integer(aLStack120);
  iVar3 = lib::L2CValue::as_integer(aLStack152);
  uVar4 = lib::L2CValue::as_integer(aLStack168);
  GVar5 = lib::L2CValue::as_integer(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack200);
  iVar6 = lib::L2CValue::as_integer(aLStack216);
  iVar7 = lib::L2CValue::as_integer(aLStack232);
  iVar8 = lib::L2CValue::as_integer(aLStack248);
  lib::L2CValue::as_integer(aLStack136);
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
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

