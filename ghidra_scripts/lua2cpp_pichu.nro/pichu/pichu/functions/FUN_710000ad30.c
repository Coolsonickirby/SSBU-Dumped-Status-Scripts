
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ad30(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pLVar4 = aLStack256;
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack224,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::operator=(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue(aLStack96,2);
  uVar2 = lib::L2CValue::operator<(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    fVar5 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    fVar5 = (float)app::lua_bind::ControlModule__get_stick_y_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator*(aLStack128,aLStack128);
    lib::L2CValue::operator*(aLStack144,aLStack144);
    lib::L2CValue::operator+(aLStack240,aLStack256);
    lib::L2CAgent::math_sqrt((L2CAgent *)auStack224,pLVar4);
    lib::L2CValue::operator=((L2CValue *)(auStack224 + 0x10),aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0x16f738d149);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar3 = lib::L2CValue::as_integer(aLStack240);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    uVar2 = lib::L2CValue::operator<=(aLStack96,(L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::operator=(aLStack192,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      fVar6 = (float)lib::L2CValue::as_number(aLStack192);
      fVar7 = (float)lib::L2CValue::as_number(aLStack128);
      fVar8 = (float)lib::L2CValue::as_number(aLStack144);
      fVar5 = (float)app::sv_math::vec2_angle(fVar5,fVar6,fVar7,fVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack256,0x172b6d941c);
      uVar2 = lib::L2CValue::as_integer(aLStack240);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar2 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
      pLVar4 = (L2CValue *)(uVar2 & 0xffffffff);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,(int)pLVar4);
      lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar4);
      uVar2 = lib::L2CValue::operator<(aLStack96,aLStack176);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::L2CValue(param_1,true);
        goto LAB_710000b0f4;
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,false);
LAB_710000b0f4:
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

