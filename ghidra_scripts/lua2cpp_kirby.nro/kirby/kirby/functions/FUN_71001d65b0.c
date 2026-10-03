
void FUN_71001d65b0(L2CValue *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  Hash40 HVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xeb8131ac9);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  uVar2 = app::lua_bind::FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3);
  lib::L2CValue::L2CValue(param_1,uVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  iVar1 = FIGHTER_KIND_KIRBY;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar5 = lib::L2CValue::operator==(aLStack64,pLVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x124e1d48d4);
    HVar3 = lib::L2CValue::as_hash(aLStack80);
    uVar2 = app::lua_bind::FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar3);
    lib::L2CValue::L2CValue(aLStack64,uVar2);
    lib::L2CValue::operator=(param_1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

