
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710019c310(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  Hash40 HVar7;
  undefined8 *puVar8;
  FighterModuleAccessor *pFVar9;
  float fVar10;
  int in_stack_fffffffffffffef4;
  undefined in_stack_fffffffffffffefc;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined8 auStack176 [2];
  undefined8 auStack160 [2];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack56;
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
  uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&uStack64);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
    uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&uStack64);
    lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
    if ((uVar4 & 1) != 0) goto LAB_710019c394;
    lib::L2CValue::L2CValue
              ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_TRON_HOLD);
    uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&uStack64);
    lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_TRON_HOLD);
      uVar4 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) == 0) goto LAB_710019c718;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::FighterSpecializer_Reflet::exit_special_n_tron_hold(pFVar9);
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,0x12db3e4172);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)&uStack64);
    app::lua_bind::EffectModule__kill_kind_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,true,true);
    puVar8 = &uStack64;
  }
  else {
LAB_710019c394:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE);
    FUN_710019c9d0(param_1,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE2);
    FUN_710019c9d0(param_1,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE3);
    FUN_710019c9d0(param_1,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,_FIGHTER_STATUS_KIND_WAIT);
    uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
    lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack64,_FIGHTER_STATUS_KIND_FALL);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) != 0) goto LAB_710019c508;
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_CANCEL);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) != 0) goto LAB_710019c508;
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_JUMP_CANCEL);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) != 0) goto LAB_710019c508;
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_CANCEL);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) != 0) goto LAB_710019c508;
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_JUMP_CANCEL);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) != 0) goto LAB_710019c508;
      lib::L2CValue::L2CValue((L2CValue *)&uStack64,FIGHTER_STATUS_KIND_GUARD_ON);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&uStack64,FIGHTER_STATUS_KIND_ESCAPE);
        uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        if ((uVar4 & 1) != 0) goto LAB_710019c674;
        lib::L2CValue::L2CValue((L2CValue *)&uStack64,FIGHTER_STATUS_KIND_ESCAPE_B);
        uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        if ((uVar4 & 1) != 0) goto LAB_710019c674;
        lib::L2CValue::L2CValue((L2CValue *)&uStack64,_FIGHTER_STATUS_KIND_ESCAPE_F);
        uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        if ((uVar4 & 1) != 0) goto LAB_710019c674;
        lib::L2CValue::L2CValue
                  ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_SHOOT);
        uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        if ((uVar4 & 1) != 0) goto LAB_710019c674;
        lib::L2CValue::L2CValue
                  ((L2CValue *)&uStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_SHOOT);
        uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        if ((uVar4 & 1) != 0) goto LAB_710019c674;
        lib::L2CValue::L2CValue((L2CValue *)&uStack64,FIGHTER_STATUS_KIND_ESCAPE_AIR);
        uVar4 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)&uStack64);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        if ((uVar4 & 1) != 0) goto LAB_710019c674;
        lib::L2CValue::L2CValue((L2CValue *)&uStack64,0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND
                  );
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        puVar8 = &uStack64;
        goto LAB_710019c670;
      }
    }
    else {
LAB_710019c508:
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack64,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
      iVar1 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,iVar1);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      lib::L2CValue::L2CValue((L2CValue *)&uStack64,_FIGHTER_REFLET_MAGIC_KIND_TRON);
      uVar4 = lib::L2CValue::operator==((L2CValue *)&uStack64,(L2CValue *)auStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&uStack64,0xaec2db62e);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        HVar6 = lib::L2CValue::as_hash((L2CValue *)&uStack64);
        fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
        app::lua_bind::EffectModule__req_common_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,fVar10);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
        lib::L2CValue::L2CValue(aLStack208,0x12db3e4172);
        lib::L2CValue::L2CValue(aLStack224,0x5eb263e0d);
        HVar6 = lib::L2CValue::as_hash(aLStack208);
        HVar7 = lib::L2CValue::as_hash(aLStack224);
        uStack72 = _LUA_SCRIPT_STATUS_FUNC_STATUS_END;
        local_50 = LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA;
        uStack64 = local_50;
        uStack56 = uStack72;
        uVar2 = app::lua_bind::EffectModule__req_follow_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,HVar7,
                           (Vector3f *)&uStack64,(Vector3f *)&local_50,1.0,false,0,0,-1,
                           in_stack_fffffffffffffef4,0,(bool)in_stack_fffffffffffffefc,false);
        lib::L2CValue::L2CValue(aLStack192,uVar2);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
      }
      puVar8 = auStack176;
LAB_710019c670:
      lib::L2CValue::~L2CValue((L2CValue *)puVar8);
    }
LAB_710019c674:
    puVar8 = auStack160;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar8);
LAB_710019c718:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

