
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000107d0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_KIND_SPECIAL_LW_HOLD);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_NESS_STATUS_KIND_SPECIAL_LW_HIT);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_EFFECT_HANDLE);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_SE_HANDLE);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack112);
    if ((uVar5 & 1) == 0) {
      iVar1 = lib::L2CValue::as_integer(aLStack128);
      iVar1 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack64,iVar1);
      lib::L2CValue::L2CValue(aLStack48,0);
      uVar5 = lib::L2CValue::operator<=(aLStack48,aLStack64);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar5 & 1) != 0) {
        uVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::EffectModule__kill_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,true,true);
      }
      lib::L2CValue::L2CValue(aLStack48,-1);
      iVar1 = lib::L2CValue::as_integer(aLStack48);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
      lib::L2CValue::~L2CValue(aLStack48);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      iVar1 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::L2CValue(aLStack48,0);
      uVar5 = lib::L2CValue::operator<=(aLStack48,aLStack80);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar5 & 1) != 0) {
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::SoundModule__stop_se_handle_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
      }
      lib::L2CValue::L2CValue(aLStack48,-1);
      iVar1 = lib::L2CValue::as_integer(aLStack48);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
      lib::L2CValue::~L2CValue(aLStack48);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

