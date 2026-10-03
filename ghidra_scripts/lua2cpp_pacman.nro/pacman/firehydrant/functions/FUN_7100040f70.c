
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100040f70(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator<(aLStack64,param_3);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    pLVar3 = aLStack80;
    lib::L2CValue::operator-(param_3,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
    lib::L2CValue::L2CValue(aLStack64,360.0);
    lib::L2CValue::operator+(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar3 = aLStack80;
    lib::L2CValue::operator-(aLStack160,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)auStack144,pLVar3);
    uVar2 = lib::L2CValue::operator<((L2CValue *)(auStack144 + 0x10),aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar2 & 1) == 0) goto LAB_71000411a4;
    lib::L2CValue::L2CValue(aLStack64,360.0);
    lib::L2CValue::operator+(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator=(param_3,aLStack96);
  }
  else {
    pLVar3 = aLStack80;
    lib::L2CValue::operator-(param_3,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
    lib::L2CValue::L2CValue(aLStack64,360.0);
    lib::L2CValue::operator-(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar3 = aLStack80;
    lib::L2CValue::operator-(aLStack160,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)auStack144,pLVar3);
    uVar2 = lib::L2CValue::operator<((L2CValue *)(auStack144 + 0x10),aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar2 & 1) == 0) goto LAB_71000411a4;
    lib::L2CValue::L2CValue(aLStack64,360.0);
    lib::L2CValue::operator-(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator=(param_3,aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71000411a4:
  lib::L2CValue::L2CValue(param_1,param_3);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

