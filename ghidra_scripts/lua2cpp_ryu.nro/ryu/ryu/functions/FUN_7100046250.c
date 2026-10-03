
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100046250(long param_1)

{
  byte bVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  signed sVar6;
  int iVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_HIT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack96);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xe);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLOAT_HIT_FRAME);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar11,iVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack112,0x1f97425290);
      uVar9 = lib::L2CValue::as_integer(aLStack96);
      uVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar9,uVar10);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      sVar6 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ControlModule__set_special_command_life_extend_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),sVar6);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack112,0x2461b773c3);
      uVar9 = lib::L2CValue::as_integer(aLStack96);
      uVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar9,uVar10);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ControlModule__set_special_command_life_count_extend_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_HIT);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
      goto LAB_71000466d8;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_HIT);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_STEP_CHANCEL);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar9 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) {
    return;
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_6N6);
  lib::L2CValue::operator&(pLVar8,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x23);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_4N4);
    lib::L2CValue::operator&(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_B);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_STEP_CHANCEL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar7 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar7);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_F);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_STEP_CHANCEL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar7 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar7);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71000466d8:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

