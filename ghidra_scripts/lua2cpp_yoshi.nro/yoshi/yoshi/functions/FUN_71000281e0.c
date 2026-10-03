
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000281e0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *this;
  Hash40 HVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SWALLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    app::LinkEvent::new_l2c_table();
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x105a79305b);
    lib::L2CValue::L2CValue(aLStack96,0xd3de88c24);
    lib::L2CValue::operator=(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
    FUN_710001b1f0(aLStack96,param_1,aLStack128,aLStack112);
    lib::L2CValue::operator=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SWALLOW);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3)
    ;
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SPIT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    pLVar7 = aLStack96;
    goto LAB_7100028678;
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SPITED);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack144);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),2);
  lib::L2CValue::L2CValue(aLStack112,pLVar7);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_YOSHI);
  uVar8 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_KIRBY);
    uVar8 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) goto LAB_7100028424;
  }
  else {
LAB_7100028424:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_GENERATE_ARTICLE_TAMAGO);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ArticleModule__generate_article_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,false,-1);
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,uVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  app::LinkEventThrow::new_l2c_table();
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack96,0xa7c76eb03);
  lib::L2CValue::operator=(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0xc3e3c1ede);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  lib::L2CValue::operator=(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,LINK_NO_CAPTURE);
  FUN_710001b1f0(aLStack96,param_1,aLStack176,aLStack160);
  lib::L2CValue::operator=(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ATTACK_ABSOLUTE_KIND_THROW);
  lib::L2CValue::L2CValue(aLStack176,0x54f934137);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0xa5f8ae909);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x7ce0a07b2);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  HVar9 = lib::L2CValue::as_hash(aLStack176);
  iVar5 = lib::L2CValue::as_integer(pLVar7);
  iVar6 = lib::L2CValue::as_integer(this);
  app::lua_bind::AttackModule__hit_absolute_joint_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,uVar4,HVar9,iVar5,iVar6);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SPIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_N_FLAG_SPITED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  pLVar7 = aLStack128;
LAB_7100028678:
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

