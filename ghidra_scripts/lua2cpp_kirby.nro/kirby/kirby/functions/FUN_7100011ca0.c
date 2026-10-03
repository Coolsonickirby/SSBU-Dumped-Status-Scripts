
void FUN_7100011ca0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(param_1);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,3);
  uVar3 = lib::L2CValue::operator==(param_4,pLVar2);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_3,2);
    uVar3 = lib::L2CValue::operator==(param_4,pLVar2);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator/(param_5,param_6);
      lib::L2CValue::operator=(param_1,aLStack96);
      pLVar2 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0.5);
      lib::L2CValue::operator*(aLStack96,param_6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.75);
      lib::L2CValue::operator*(aLStack96,param_6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator+(aLStack160,aLStack176);
      lib::L2CValue::L2CValue(aLStack96,0.5);
      lib::L2CValue::operator*(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator/(param_5,aLStack128);
      lib::L2CValue::operator=(param_1,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      pLVar2 = aLStack160;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0.25);
    lib::L2CValue::operator*(aLStack96,param_6);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator/(param_5,aLStack128);
    lib::L2CValue::operator=(param_1,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar2 = aLStack128;
  }
  lib::L2CValue::~L2CValue(pLVar2);
  iVar1 = lib::L2CValue::as_integer(param_7);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::operator*(param_1,aLStack112);
  lib::L2CValue::operator=(param_1,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack128,0x141f79374a);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  uVar3 = lib::L2CValue::operator<(aLStack96,param_1);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::operator=(param_1,aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

