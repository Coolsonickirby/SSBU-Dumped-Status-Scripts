
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710008b7a0(undefined8 param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  float in_register_00005008;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0xa3ddec741);
  lib::L2CValue::L2CValue(aLStack112,0x4857fe845);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  lVar5 = app::lua_bind::WorkModule__get_param_int64_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,lVar5);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xa3ddec741);
  lib::L2CValue::L2CValue(aLStack112,0xd66000584);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xa3ddec741);
  lib::L2CValue::L2CValue(aLStack112,0xd11073512);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  uVar9 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2,HVar6,false);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue(aLStack192,in_register_00005008);
  FUN_710000eb70(aLStack176,param_2,aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack240,fVar8);
  lib::L2CValue::operator*(aLStack144,aLStack240);
  lib::L2CValue::operator+(pLVar7,aLStack112);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::operator=(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar7,aLStack160);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLAG_TARGET);
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack240);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_TARGET_X);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    lib::L2CValue::operator=(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack256,pLVar7);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack272,pLVar7);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x0,(L2CValue)0xf0);
  uVar9 = app::lua_bind::PostureModule__pos_2d_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack320,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,aLStack320);
  lib::L2CValue::L2CValue(aLStack112,aLStack304);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator-(aLStack240,aLStack288);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

