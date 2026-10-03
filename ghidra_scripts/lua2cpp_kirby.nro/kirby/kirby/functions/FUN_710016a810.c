
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710016a810(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CAgent *this;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar7 = aLStack176;
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x1488134442);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,(ulong)pLVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar6 = (L2CValue *)(param_1 + 200);
  this = (L2CAgent *)lib::L2CValue::operator[](pLVar6,0x1b);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),fVar8);
  lib::L2CValue::operator*(pLVar5,(L2CValue *)(auStack144 + 0x10));
  lib::L2CAgent::math_atan(this,aLStack80,pLVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
  lib::L2CValue::operator*(pLVar4,pLVar5);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1b);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1b);
  lib::L2CValue::operator*(pLVar4,pLVar6);
  lib::L2CValue::operator+(aLStack160,aLStack176);
  lib::L2CAgent::math_sqrt((L2CAgent *)auStack144,pLVar7);
  lib::L2CValue::L2CValue(aLStack80,0.1);
  uVar3 = lib::L2CValue::operator<((L2CValue *)(auStack144 + 0x10),aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,90.0);
    pLVar6 = aLStack96;
    lib::L2CValue::operator-(aLStack80,pLVar6);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CAgent::math_rad((L2CAgent *)auStack144,pLVar6);
    uVar3 = lib::L2CValue::operator<(aLStack112,(L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack144);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,90.0);
      pLVar6 = aLStack96;
      lib::L2CValue::operator+(aLStack80,pLVar6);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CAgent::math_rad((L2CAgent *)auStack144,pLVar6);
      uVar3 = lib::L2CValue::operator<((L2CValue *)(auStack144 + 0x10),aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack144);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_HI);
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack144 + 0x10),
                   _FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_B);
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack144 + 0x10),
                   _FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_F);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack144 + 0x10),
                 _FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_F);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack144 + 0x10),
               _FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  }
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

