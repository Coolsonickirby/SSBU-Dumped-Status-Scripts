
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::SpecialS_pre(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  SituationKind SVar3;
  uint uVar4;
  GroundCliffCheckKind GVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  float fVar12;
  int in_stack_fffffffffffffec4;
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
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
  
  lib::L2CValue::L2CValue(aLStack136,_WEAPON_KINETIC_TYPE_RESET);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
  iVar2 = lib::L2CValue::as_integer(aLStack152);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack200,false);
  uVar9 = lib::L2CValue::operator__(aLStack120,aLStack200);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar9 & 1) != 0) {
    pfVar10 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack200,*pfVar10);
    lib::L2CValue::L2CValue(aLStack184,pfVar10[1]);
    lib::L2CValue::L2CValue(aLStack168,pfVar10[2]);
    FUN_710002fd80(aLStack152,this,aLStack200);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::L2CValue
              (aLStack216,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_PARENT_LENGTH);
    iVar2 = lib::L2CValue::as_integer(aLStack216);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack120,fVar12);
    lib::L2CValue::L2CValue(aLStack264,0xaa3c06ee2);
    lib::L2CValue::L2CValue(aLStack280,0x17d99767a4);
    uVar9 = lib::L2CValue::as_integer(aLStack264);
    uVar11 = lib::L2CValue::as_integer(aLStack280);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar9,uVar11);
    lib::L2CValue::L2CValue(aLStack248,fVar12);
    fVar12 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack296,fVar12);
    lib::L2CValue::operator_(aLStack248,aLStack296);
    uVar9 = lib::L2CValue::operator__(aLStack120,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack120,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_PARENT_X);
      iVar2 = lib::L2CValue::as_integer(aLStack120);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack216,fVar12);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::L2CValue(aLStack120,_WEAPON_KINETIC_TYPE_ROSETTA_TICO_FOLLOW);
      lib::L2CValue::operator_(aLStack136,aLStack120);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack216);
    }
    lib::L2CValue::_L2CValue(aLStack152);
  }
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack152,GROUND_CORRECT_KIND_KEEP);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,true);
  lib::L2CValue::L2CValue(aLStack248,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
  lib::L2CValue::L2CValue(aLStack264,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_INT);
  lib::L2CValue::L2CValue(aLStack280,_WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
  lib::L2CValue::L2CValue(aLStack296,0);
  SVar3 = lib::L2CValue::as_integer(aLStack120);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  uVar4 = lib::L2CValue::as_integer(aLStack152);
  GVar5 = lib::L2CValue::as_integer(aLStack216);
  bVar1 = lib::L2CValue::as_bool(aLStack232);
  iVar6 = lib::L2CValue::as_integer(aLStack248);
  iVar7 = lib::L2CValue::as_integer(aLStack264);
  iVar8 = lib::L2CValue::as_integer(aLStack280);
  lib::L2CValue::as_integer(aLStack296);
  app::lua_bind::StatusModule__init_settings_impl
            (this->moduleAccessor,SVar3,iVar2,uVar4,GVar5,(bool)(bVar1 & 1),iVar6,iVar7,iVar8,
             in_stack_fffffffffffffec4);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

