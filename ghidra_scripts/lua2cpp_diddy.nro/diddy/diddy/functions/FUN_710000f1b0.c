
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000f1b0(long param_1)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_ATTACK2);
  uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_JUMP2);
    uVar2 = lib::L2CValue::operator==(pLVar1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      app::lua_bind::CatchModule__cling_cut_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),false);
      return;
    }
  }
  app::LinkEventThrow::new_l2c_table();
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack64,0x11fbde37d3);
  lib::L2CValue::operator=(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0xc3e3c1ede);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  lib::L2CValue::operator=(pLVar1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  FUN_710000f3a0(aLStack64,param_1,aLStack96,aLStack80);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

