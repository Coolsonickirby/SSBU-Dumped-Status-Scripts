
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100043a10(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  float *pfVar4;
  ulong *puVar5;
  float fVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong local_e0;
  ulong uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_e0);
  app::lua_bind::MotionModule__set_no_comp_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  fVar6 = (float)app::lua_bind::PostureModule__rot_x_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0x2d);
  lib::L2CValue::operator-(aLStack112,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_ANGLE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,(int)pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar3);
  puVar5 = &local_e0;
  lib::L2CValue::operator=(aLStack96,(L2CValue *)puVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack96,(L2CValue *)puVar5);
  pLVar3 = param_2;
  lib::L2CValue::operator*(aLStack144,param_2);
  lib::L2CValue::operator-(aLStack128);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack96,pLVar3);
  lib::L2CValue::operator*(aLStack176,param_3);
  pLVar3 = aLStack160;
  lib::L2CValue::operator-((L2CValue *)&local_e0,pLVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack96,pLVar3);
  lib::L2CValue::operator*(aLStack144,param_2);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack96,param_2);
  lib::L2CValue::operator*(aLStack176,param_3);
  lib::L2CValue::operator-((L2CValue *)&local_e0,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,*pfVar4);
  lib::L2CValue::L2CValue(aLStack208,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack192,pfVar4[2]);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_e0);
  lib::L2CValue::operator=(aLStack160,aLStack208);
  lib::L2CValue::operator=(aLStack176,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack256,fVar6);
  lib::L2CValue::operator*(aLStack112,aLStack256);
  lib::L2CValue::operator+(aLStack144,aLStack240);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::operator+(aLStack160,aLStack128);
  lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  lVar9 = lib::L2CValue::as_number(aLStack160);
  uVar7 = lib::L2CValue::as_number(aLStack176);
  local_e0 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack216 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_pos_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_GROUND_RHOMBUS_MODIFY_DEFAULT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::GroundModule__set_rhombus_modify_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

