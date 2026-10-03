
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042ca0(L2CValue *param_1,long param_2)

{
  L2CValue *this;
  ulong uVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0xe);
  lib::L2CValue::L2CValue(aLStack64,6);
  uVar1 = lib::L2CValue::operator<=(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,0xff);
  }
  else {
    fVar2 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,fVar2);
    lib::L2CValue::L2CValue(param_1,_GROUND_TOUCH_FLAG_UP | GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::L2CValue(aLStack64,-1.0);
    uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::operator|(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(param_1,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator|(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(param_1,aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

