
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005a80(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack96,0x17e41b2f1e);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator+(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack112,0x193e47e7e5);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,HVar6,-1);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack112,0x18cc1e6e1a);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,HVar6,-1);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack64);
        this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this);
        app::FighterUtil::flash_eye_info(pBVar7);
      }
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

