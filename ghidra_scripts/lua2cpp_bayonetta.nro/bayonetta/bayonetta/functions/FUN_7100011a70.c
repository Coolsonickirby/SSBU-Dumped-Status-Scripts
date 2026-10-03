
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011a70(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::attack_uniq_chk(param_2);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x20);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator&(pLVar6,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lVar1 = -0x40;
LAB_7100011bd4:
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_ATTACK_FLAG_CONNECT_COMBO);
        iVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
        lVar1 = -0x30;
        goto LAB_7100011bd4;
      }
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_ATTACK_FLAG_RESTART_COMBO);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar7 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_ATTACK_FLAG_CONNECT_COMBO);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar7 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      else {
        iVar4 = app::lua_bind::ComboModule__count_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack64,iVar4);
        lib::L2CValue::L2CValue(aLStack160,0x109a712db9);
        lib::L2CValue::L2CValue(aLStack176,0);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack144,iVar4);
        uVar7 = lib::L2CValue::operator==(aLStack64,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_7100011f70;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTACK_FLAG_RESTART);
        iVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue(aLStack64);
        app::lua_bind::ComboModule__reset_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_ATTACK_FLAG_ENABLE_NO_HIT_COMBO);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar7 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_NO_HIT_COMBO_TRIGGER);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
          lib::L2CValue::L2CValue(aLStack64,false);
          uVar7 = lib::L2CValue::operator==(aLStack112,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar7 & 1) == 0) goto LAB_7100011f70;
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_ATTACK_FLAG_RESTART_ATTACK);
          iVar4 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
          goto LAB_7100011f48;
        }
      }
    }
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar6 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_ATTACK_DISABLE_MINI_JUMP_ATTACK);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_ATTACK_MINI_JUMP_ATTACK_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar4,0);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_7100011f70;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_STATUS_WORK_ID_INT_RESERVE_ATTACK_MINI_JUMP_ATTACK_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack64,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_ATTACK_DISABLE_MINI_JUMP_ATTACK);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT_BUTTON);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar4);
LAB_7100011f48:
    pLVar6 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar6);
LAB_7100011f70:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

