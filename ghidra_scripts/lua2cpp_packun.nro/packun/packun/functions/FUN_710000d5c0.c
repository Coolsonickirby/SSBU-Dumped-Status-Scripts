
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000d5c0(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0x15af2f7bd6);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue(param_1,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffc0,
             _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffc0,
             _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0);
  uVar2 = lib::L2CValue::operator<(aLStack112,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  }
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(int)pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar5);
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffc0,
             _FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER_LAST);
  uVar2 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&stack0xffffffffffffffc0,
               _FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER_DIVE);
    uVar2 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,2.0);
      lib::L2CValue::operator*((L2CValue *)&stack0xffffffffffffffc0,aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::operator/(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,1);
      lib::L2CValue::operator+(aLStack80,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::operator*(aLStack112,aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,2.0);
      lib::L2CValue::operator*(aLStack80,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,1.0);
      lib::L2CValue::operator+(aLStack224,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,3.0);
      lib::L2CValue::operator/(aLStack208,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::operator/(aLStack144,aLStack160);
      lib::L2CValue::operator*(aLStack224,aLStack176);
      lib::L2CValue::operator/(aLStack208,aLStack192);
      lib::L2CValue::operator=(param_1,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar4 = aLStack144;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x166ecf5bbf);
      uVar2 = lib::L2CValue::as_integer(aLStack144);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar5);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::operator=(param_1,(L2CValue *)&stack0xffffffffffffffc0);
      pLVar4 = (L2CValue *)&stack0xffffffffffffffc0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x22f498d9b9);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar5);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x22c895e6e0);
    uVar2 = lib::L2CValue::as_integer(aLStack160);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack144,fVar5);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x2bfa34433e);
    uVar2 = lib::L2CValue::as_integer(aLStack176);
    uVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar5);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0x19bd26ccf5);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack176,fVar5);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_FLOAT_PENDULUM_REACH_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack192,fVar5);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::operator/(aLStack192,aLStack176);
    lib::L2CValue::operator*((L2CValue *)&stack0xffffffffffffffc0,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    uVar2 = lib::L2CValue::operator<(aLStack208,aLStack144);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator=(aLStack208,aLStack144);
    }
    lib::L2CValue::operator*(aLStack160,aLStack112);
    lib::L2CValue::operator-(aLStack208,aLStack240);
    lib::L2CValue::operator=(param_1,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    uVar2 = lib::L2CValue::operator<(param_1,aLStack144);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator=(param_1,aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar4 = (L2CValue *)&stack0xffffffffffffffc0;
  }
  lib::L2CValue::~L2CValue(pLVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

