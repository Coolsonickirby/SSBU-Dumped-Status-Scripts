
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710015d120(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  L2CValue *this;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,lVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xa82125b6f);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xcaaf17fe2);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xa82125b6f);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xe724031fb);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xcddf64f74);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1065bc787e);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xcaaf17fe2);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1012bb48e8);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xb1709c575);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xb600ef5e3);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf979cf0d4);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xb1709c575);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xfe09bc042);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_MOTION_KIND);
  lVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BUTTON_RAPID);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_TRIGGER);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_NEXT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_CHECK_BARRAGE_BUTTON_ON);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_JUMP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_UNABLE_SPECIAL_N);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_EXIST);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack80,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_N |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::FighterStatusModuleImpl__reset_log_action_info_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,fVar7,fVar8,(bool)(bVar1 & 1),
               0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,fVar7,fVar8,(bool)(bVar1 & 1),
               0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

