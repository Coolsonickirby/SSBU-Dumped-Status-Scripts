
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008450(long param_1,L2CValue *param_2,L2CAgent *param_3)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CAgent *pLVar4;
  BattleObjectModuleAccessor **ppBVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  void **local_50;
  lua_State *plStack72;
  
  pLVar4 = param_3;
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_50,param_2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    app::lua_bind::PostureModule__set_lr_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    app::lua_bind::PostureModule__set_lr_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6);
  }
  ppBVar5 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar5);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::operator*(param_2,aLStack128);
  pLVar3 = aLStack112;
  lib::L2CAgent::math_atan(param_3,pLVar3,(L2CValue *)pLVar4);
  lib::L2CAgent::math_deg((L2CAgent *)&local_50,pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::operator-(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar2 = lib::L2CValue::as_number(aLStack112);
  lVar8 = lib::L2CValue::as_number(aLStack128);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  local_50 = (void **)(uVar2 & 0xffffffff | lVar8 << 0x20);
  plStack72 = (lua_State *)(ulong)uVar7;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar5,(Vector3f *)&local_50,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator-(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_ROT_ANGLE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar5,fVar6,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

