
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006700(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,1.0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_GROUND_DEGREE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,45.0);
    lib::L2CValue::L2CValue(aLStack112,param_3);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator=(aLStack112,param_4);
    }
    pLVar3 = aLStack112;
    lib::L2CValue::operator=(param_1,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar3);
    pLVar3 = aLStack96;
    uVar2 = lib::L2CValue::operator<(aLStack64,pLVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar3);
      lib::L2CValue::operator/(aLStack64,aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      pLVar3 = aLStack64;
      lib::L2CValue::operator-(aLStack112,pLVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar3);
      lib::L2CValue::operator*((L2CValue *)(auStack176 + 0x10),aLStack128);
      lib::L2CValue::operator=(param_1,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      uVar2 = lib::L2CValue::operator<(aLStack64,aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,1.0);
        lib::L2CValue::operator-(aLStack64,param_1);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::operator=(param_1,aLStack144);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,1.0);
        lib::L2CValue::operator+(param_1,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::operator=(param_1,aLStack144);
      }
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

