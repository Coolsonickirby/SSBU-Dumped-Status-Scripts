
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020a70(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong *this;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong auStack80 [2];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)auStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack80,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack80);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),2);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KIND_SHIZUE);
    uVar4 = lib::L2CValue::operator==(this_00,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_ADJUST_ANGLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    bVar1 = app::lua_bind::BattleObjectSlow__is_adjust_impl(FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((bVar2 & 1U) == 0) {
      return;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack80,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,0);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)auStack80);
    uVar4 = lib::L2CValue::as_number(aLStack96);
    lVar8 = lib::L2CValue::as_number(aLStack112);
    uVar7 = lib::L2CValue::as_number(aLStack128);
    local_40 = uVar4 & 0xffffffff | lVar8 << 0x20;
    uStack56 = (ulong)uVar7;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,(Vector3f *)&local_40,0,0);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    this = auStack80;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    this = &local_40;
  }
  lib::L2CValue::~L2CValue((L2CValue *)this);
  return;
}

