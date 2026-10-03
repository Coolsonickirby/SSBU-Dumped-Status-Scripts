
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002ef60(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  Hash40 HVar5;
  L2CAgent *this;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  float in_register_00005008;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_CHECK_UPSIDE_DOWN_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x142699eceb);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar4 = app::lua_bind::WorkModule__get_param_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    uVar9 = app::lua_bind::ModelModule__joint_global_axis_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,iVar1,true);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(float)uVar9);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
    pLVar7 = (L2CValue *)(auStack176 + 0x10);
    FUN_7100005230(aLStack96,param_2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::~L2CValue(aLStack112);
    this = (L2CAgent *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
    lib::L2CAgent::math_atan(this,pLVar6,pLVar7);
    lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar6);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x113b756fad);
    uVar2 = lib::L2CValue::as_integer(aLStack208);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    uVar2 = lib::L2CValue::operator<=(aLStack192,(L2CValue *)auStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,true);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      return;
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,false);
  return;
}

