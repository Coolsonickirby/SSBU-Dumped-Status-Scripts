
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018150(L2CValue *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xeb8131ac9);
  iVar1 = FIGHTER_KIND_KIRBY;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar4 = lib::L2CValue::operator==(aLStack80,pLVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_ROY);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x14173cb18c);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x12af64ad3b);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack80,0xeb8131ac9);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  uVar2 = app::lua_bind::MotionModule__end_frame_from_hash_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5);
  lib::L2CValue::L2CValue(param_1,uVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

