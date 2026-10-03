
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020f50(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_71000210ac;
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      FUN_7100020310(aLStack64,param_2,aLStack128);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) goto LAB_71000210ac;
LAB_710002118c:
      iVar3 = 1;
      goto LAB_71000211b0;
    }
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
LAB_71000210ac:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_ATTACK_WORK_FLAG_HIT_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_SITUATION_KIND_GROUND);
        FUN_71000204d0(aLStack64,param_2,aLStack144);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) goto LAB_710002118c;
      }
    }
  }
  iVar3 = 0;
LAB_71000211b0:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

