
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b2f0(long param_1)

{
  byte bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_WAIT);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_ATTACK);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_THROW);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::CatchModule__set_send_cut_event_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack64);
        app::lua_bind::CatchModule__catch_cut_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),false,false);
        goto LAB_710001b42c;
      }
    }
  }
  app::LinkEvent::new_l2c_table();
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack64,0x157042cc9d);
  lib::L2CValue::operator=(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,LINK_NO_CAPTURE);
  FUN_710001b1f0(aLStack64,param_1,aLStack112,aLStack96);
  lib::L2CValue::operator=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710001b42c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

