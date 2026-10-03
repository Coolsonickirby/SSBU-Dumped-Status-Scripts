
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100056920(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH2);
      uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar1 & 1) == 0) {
        lVar4 = 0xc90c;
      }
      else {
        lVar4 = 0xc908;
      }
    }
    else {
      lVar4 = 0xc904;
    }
    uVar3 = _FIGHTER_LOG_MASK_FLAG_HAJIKI | *(uint *)((long)&LUA_SCRIPT_LINE_MAX + lVar4);
  }
  else {
    uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_01;
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH2);
      uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_03;
      if ((uVar1 & 1) != 0) {
        uVar3 = _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ADDITIONS_ATTACK_02;
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,uVar3);
  return;
}

