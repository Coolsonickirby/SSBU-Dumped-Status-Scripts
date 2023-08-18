
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPickel::status::SpecialN2Craft_pre(long this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  SituationKind SVar7;
  uint uVar8;
  GroundCliffCheckKind GVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  L2CValue *return_value;
  uint in_stack_fffffffffffffec4;
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
  
  lib::L2CValue::L2CValue(aLStack120,0);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME);
  iVar5 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_int_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar5,iVar6)
  ;
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,0);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_FRAME_MAX);
  iVar5 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_int_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar5,iVar6)
  ;
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
  iVar5 = lib::L2CValue::as_integer(aLStack120);
  iVar6 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__set_int_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar5,iVar6)
  ;
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack120);
  iVar5 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar6 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack120,iVar6);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE);
      FUN_710005efe0(this,aLStack120,aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack120);
      lib::L2CValue::L2CValue(aLStack152,iVar6);
      lib::L2CValue::L2CValue(aLStack168,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      FUN_710005f1f0(this,aLStack152,aLStack168);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue(aLStack152);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  FUN_710005d5d0(aLStack136,this);
  lib::L2CValue::L2CValue(aLStack120,false);
  uVar13 = lib::L2CValue::operator__(aLStack136,aLStack120);
  lib::L2CValue::_L2CValue(aLStack120);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar13 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N2_FLAG);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N2_INT);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_SPECIAL_N2_FLOAT);
    lib::L2CValue::L2CValue(aLStack168,SITUATION_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_KINETIC_TYPE_UNIQ);
    lib::L2CValue::L2CValue(aLStack200,GROUND_CORRECT_KIND_KEEP);
    lib::L2CValue::L2CValue(aLStack216,GROUND_CLIFF_CHECK_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack232,true);
    lib::L2CValue::L2CValue(aLStack248,0);
    SVar7 = lib::L2CValue::as_integer(aLStack168);
    iVar5 = lib::L2CValue::as_integer(aLStack184);
    uVar8 = lib::L2CValue::as_integer(aLStack200);
    GVar9 = lib::L2CValue::as_integer(aLStack216);
    bVar1 = lib::L2CValue::as_bool(aLStack232);
    iVar6 = lib::L2CValue::as_integer(aLStack120);
    iVar10 = lib::L2CValue::as_integer(aLStack136);
    iVar11 = lib::L2CValue::as_integer(aLStack152);
    lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::StatusModule__init_settings_impl
              (*(BattleObjectModuleAccessor **)(this + 0x40),SVar7,iVar5,uVar8,GVar9,
               (bool)(bVar1 & 1),iVar6,iVar10,iVar11,in_stack_fffffffffffffec4);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue(aLStack168,false);
    lib::L2CValue::L2CValue(aLStack184,_FIGHTER_TREADED_KIND_NO_REAC);
    lib::L2CValue::L2CValue(aLStack200,false);
    lib::L2CValue::L2CValue(aLStack216,false);
    lib::L2CValue::L2CValue(aLStack232,false);
    lib::L2CValue::L2CValue
              (aLStack248,
               FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON |
               _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_STATUS_ATTR_START_TURN);
    lib::L2CValue::L2CValue(aLStack280,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack296,0);
    bVar1 = lib::L2CValue::as_bool(aLStack168);
    iVar5 = lib::L2CValue::as_integer(aLStack184);
    bVar2 = lib::L2CValue::as_bool(aLStack200);
    bVar3 = lib::L2CValue::as_bool(aLStack216);
    bVar4 = lib::L2CValue::as_bool(aLStack232);
    uVar13 = lib::L2CValue::as_integer(aLStack248);
    uVar8 = lib::L2CValue::as_integer(aLStack264);
    uVar12 = lib::L2CValue::as_integer(aLStack280);
    lib::L2CValue::as_integer(aLStack296);
    app::lua_bind::FighterStatusModuleImpl__set_fighter_status_data_impl
              (*(BattleObjectModuleAccessor **)(this + 0x40),(bool)(bVar1 & 1),iVar5,
               (bool)(bVar2 & 1),(bool)(bVar3 & 1),(bool)(bVar4 & 1),uVar13,uVar8,uVar12,
               in_stack_fffffffffffffec4);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue(return_value,0);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack120);
  }
  else {
    lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N2_FAILURE);
    iVar5 = lib::L2CValue::as_integer(aLStack120);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl
              (*(BattleObjectModuleAccessor **)(this + 0x40),iVar5);
    lib::L2CValue::_L2CValue(aLStack120);
    lib::L2CValue::L2CValue(return_value,1);
  }
  return;
}

