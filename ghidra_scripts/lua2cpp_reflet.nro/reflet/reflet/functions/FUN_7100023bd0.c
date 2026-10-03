
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023bd0(long param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  L2CValue *this;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  FighterModuleAccessor *pFVar9;
  ulong *this_00;
  Hash40 HVar10;
  Hash40 HVar11;
  float fVar12;
  long lVar13;
  int in_stack_fffffffffffffdf4;
  undefined in_stack_fffffffffffffdfc;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  ulong auStack368 [2];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  ulong auStack288 [2];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong local_50;
  ulong uStack72;
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    lVar13 = -0x40;
    goto LAB_71000246fc;
  }
  bVar1 = app::lua_bind::SlowModule__is_skip_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    return;
  }
  pLVar8 = (L2CValue *)(param_1 + 200);
  this = (L2CValue *)lib::L2CValue::operator[](pLVar8,3);
  uVar3 = lib::L2CValue::as_integer(this);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KIND_KIRBY);
  bVar1 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  iVar4 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_HOLD);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) != 0) goto LAB_7100023d20;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_TRON_HOLD);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_TRON_HOLD);
      uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) goto LAB_71000244f0;
      goto LAB_71000246f0;
    }
LAB_71000240b0:
    lVar13 = -0x50;
LAB_71000246ec:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar13));
  }
  else {
LAB_7100023d20:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_CURRENT_POINT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack176,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar6 = lib::L2CValue::operator<=(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) != 0) {
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_SHOOT);
        lib::L2CValue::L2CValue(aLStack208,false);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,(bool)(bVar1 & 1))
        ;
        lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
        lVar13 = -0xd0;
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_SHOOT);
        lib::L2CValue::L2CValue(aLStack208,false);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,(bool)(bVar1 & 1))
        ;
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
        lVar13 = -0xb0;
      }
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar13));
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_71000240b0;
    }
    lib::L2CValue::L2CValue(aLStack208,aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
    uVar6 = lib::L2CValue::operator==(aLStack208,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
      uVar6 = lib::L2CValue::operator==(aLStack208,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
        uVar6 = lib::L2CValue::operator==(aLStack208,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack256,0x1fe8c6f5f5);
          uVar6 = lib::L2CValue::as_integer(aLStack240);
          uVar7 = lib::L2CValue::as_integer(aLStack256);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar12);
          uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack144);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          if ((uVar6 & 1) != 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,5);
            lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
            pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
            app::FighterSpecializer_Reflet::change_grimoire(pFVar9,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
            lib::L2CValue::L2CValue
                      (aLStack240,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
            iVar5 = lib::L2CValue::as_integer(aLStack240);
            app::lua_bind::WorkModule__set_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            lib::L2CValue::L2CValue(aLStack352,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE);
            FUN_7100023aa0(param_1,aLStack352);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::L2CValue((L2CValue *)auStack368,0x1502a24841);
            lib::L2CValue::L2CValue(aLStack384,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE2)
            ;
            lib::L2CValue::L2CValue(aLStack400,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_50,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
            bVar1 = lib::L2CValue::operator==((L2CValue *)&local_50,aLStack128);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            lib::L2CValue::L2CValue(aLStack416,(bool)(bVar1 & 1));
            FUN_710000ab10(param_1,auStack368,aLStack384,aLStack400,aLStack416);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack400);
            lib::L2CValue::~L2CValue(aLStack384);
            this_00 = auStack368;
            goto LAB_71000244c4;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack256,0x21de6f0087);
        uVar6 = lib::L2CValue::as_integer(aLStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack256);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar12);
        uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack144);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        if ((uVar6 & 1) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,5);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
          pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          app::FighterSpecializer_Reflet::change_grimoire(pFVar9,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
          lib::L2CValue::L2CValue
                    (aLStack240,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          iVar5 = lib::L2CValue::as_integer(aLStack240);
          app::lua_bind::WorkModule__set_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE2);
          FUN_7100023aa0(param_1,aLStack272);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1575a578d7);
          lib::L2CValue::L2CValue(aLStack304,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE3);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_50,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
          bVar1 = lib::L2CValue::operator==((L2CValue *)&local_50,aLStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
          FUN_710000ab10(param_1,auStack288,aLStack304,aLStack320,aLStack336);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          this_00 = auStack288;
          goto LAB_71000244c4;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack256,0x19afadcac9);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar12);
      uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar6 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,5);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_TRON);
        pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::FighterSpecializer_Reflet::change_grimoire(pFVar9,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_TRON);
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        iVar5 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,iVar5);
        lib::L2CValue::~L2CValue(aLStack240);
        this_00 = &local_50;
LAB_71000244c4:
        lib::L2CValue::~L2CValue((L2CValue *)this_00);
      }
    }
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
LAB_71000244f0:
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_MAGIC_KIND_TRON);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1386af3125);
      lib::L2CValue::L2CValue(aLStack160,0x5eb263e0d);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack208,2.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      HVar10 = lib::L2CValue::as_hash(aLStack144);
      HVar11 = lib::L2CValue::as_hash(aLStack160);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      lVar13 = lib::L2CValue::as_number(aLStack208);
      uVar3 = lib::L2CValue::as_number(aLStack240);
      local_50 = uVar6 & 0xffffffff | lVar13 << 0x20;
      uStack72 = (ulong)uVar3;
      uStack88 = _LUA_SCRIPT_LINE_STATUS_SHIFT;
      local_60 = LUA_SCRIPT_LINE_STATUS_SYSTEM;
      uVar3 = app::lua_bind::EffectModule__req_follow_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar10,HVar11,
                         (Vector3f *)&local_50,(Vector3f *)&local_60,1.0,false,0,0,-1,
                         in_stack_fffffffffffffdf4,0,(bool)in_stack_fffffffffffffdfc,false);
      lib::L2CValue::L2CValue(aLStack432,uVar3);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_REFLET_STATUS_KIND_SPECIAL_N_CANCEL);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack448,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lVar13 = -0x40;
      goto LAB_71000246ec;
    }
  }
LAB_71000246f0:
  lib::L2CValue::~L2CValue(aLStack128);
  lVar13 = -0x60;
LAB_71000246fc:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar13));
  return;
}

