
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ffa0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *this;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = aLStack96;
  lib::L2CValue::L2CValue(param_1,1.0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_LAST_LR);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer(aLStack64);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(int)pLVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack64,1e-05);
  uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack64,1.0);
      lib::L2CValue::operator-(aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,1.0);
    }
    lib::L2CValue::operator=(param_1,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if (!bVar1) goto LAB_7100010100;
    this = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_START_CHARA_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator=(param_1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100010100:
  fVar5 = (float)lib::L2CValue::as_number(param_1);
  app::lua_bind::PostureModule__set_lr_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5);
  app::lua_bind::PostureModule__update_rot_y_lr_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

