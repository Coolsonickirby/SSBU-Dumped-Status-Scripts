
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::FreeWait_pre(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  SituationKind SVar4;
  uint uVar5;
  GroundCliffCheckKind GVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  int in_stack_fffffffffffffee4;
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
  
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack120,SITUATION_KIND_AIR);
  uVar11 = lib::L2CValue::operator__(pLVar10,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  if ((uVar11 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack136,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TARGET_MOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack136);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack120);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack168,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_FLAG_JOSTLE_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack168);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack120);
      FUN_710002e060(aLStack136,this,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::_L2CValue(aLStack168);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
      uVar11 = lib::L2CValue::operator__(pLVar10,aLStack136);
      if ((uVar11 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_NONE);
        uVar11 = lib::L2CValue::operator__(aLStack136,aLStack120);
        lib::L2CValue::_L2CValue(aLStack120);
        if ((uVar11 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WAIT);
          uVar11 = lib::L2CValue::operator__(aLStack136,aLStack120);
          lib::L2CValue::_L2CValue(aLStack120);
          if ((uVar11 & 1) == 0) {
            iVar3 = lib::L2CValue::as_integer(aLStack136);
            app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            lib::L2CValue::_L2CValue(aLStack136);
            return;
          }
        }
      }
      lib::L2CValue::_L2CValue(aLStack136);
    }
    lib::L2CValue::L2CValue(aLStack120,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack136,_WEAPON_KINETIC_TYPE_RESET);
    lib::L2CValue::L2CValue(aLStack168,GROUND_CORRECT_KIND_GROUND);
    lib::L2CValue::L2CValue(aLStack184,0);
    lib::L2CValue::L2CValue(aLStack200,true);
    lib::L2CValue::L2CValue(aLStack216,_WEAPON_STATUS_WORK_KEEP_FLAG_ROSETTA_TICO_FREE_WAIT_FLAG);
    lib::L2CValue::L2CValue(aLStack232,_WEAPON_STATUS_WORK_KEEP_FLAG_ROSETTA_TICO_FREE_WAIT_INT);
    lib::L2CValue::L2CValue(aLStack248,_WEAPON_STATUS_WORK_KEEP_FLAG_ROSETTA_TICO_FREE_WAIT_FLOAT);
    lib::L2CValue::L2CValue(aLStack264,0);
    SVar4 = lib::L2CValue::as_integer(aLStack120);
    iVar3 = lib::L2CValue::as_integer(aLStack136);
    uVar5 = lib::L2CValue::as_integer(aLStack168);
    GVar6 = lib::L2CValue::as_integer(aLStack184);
    bVar1 = lib::L2CValue::as_bool(aLStack200);
    iVar7 = lib::L2CValue::as_integer(aLStack216);
    iVar8 = lib::L2CValue::as_integer(aLStack232);
    iVar9 = lib::L2CValue::as_integer(aLStack248);
    lib::L2CValue::as_integer(aLStack264);
    app::lua_bind::StatusModule__init_settings_impl
              (this->moduleAccessor,SVar4,iVar3,uVar5,GVar6,(bool)(bVar1 & 1),iVar7,iVar8,iVar9,
               in_stack_fffffffffffffee4);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack120);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

