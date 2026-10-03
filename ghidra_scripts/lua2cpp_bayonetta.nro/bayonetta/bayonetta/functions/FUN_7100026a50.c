
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026a50(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    uVar2 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) goto LAB_7100026c58;
  }
  lib::L2CValue::L2CValue(aLStack112,0x194bcd3d40);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::operator*(aLStack80,aLStack96);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,1);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator+(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME)
  ;
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100026c58:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

