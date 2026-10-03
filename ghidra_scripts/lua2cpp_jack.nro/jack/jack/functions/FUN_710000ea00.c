
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ea00(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  Fighter *pFVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack80 [16];
  
  pLVar6 = (L2CValue *)(param_2 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar6,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_FINAL_MODULE_START_EXIT);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(pLVar3);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Jack::call_final_module(pFVar4,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_FINAL_READY);
  uVar5 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_FINAL_TURN_DASH);
    uVar5 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,5);
      lib::L2CValue::L2CValue(aLStack80,false);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::FighterSpecializer_Jack::set_doyle_suspend(pBVar7,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack80);
      app::lua_bind::EffectModule__remove_all_after_image_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0,0);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

