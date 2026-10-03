
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100065110(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *this;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,HVar6);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_FLAG_MINING);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_71000654a0;
    }
    lib::L2CValue::L2CValue(aLStack160,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_71000654b0;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_SPECIAL_N1_INT_MINING_END_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_GENERATE_ARTICLE_CRACK);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_GENERATE_ARTICLE_CRACK);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_CRACK_INSTANCE_WORK_ID_INT_MINING_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ArticleModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_GENERATE_ARTICLE_CRACK);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_CRACK_INSTANCE_WORK_ID_INT_MINING_END_FRAME)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ArticleModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      app::LinkEvent::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack64,0x1a1503e873);
      lib::L2CValue::operator=(pLVar8,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
      this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0xaa79e68a2);
      lib::L2CValue::operator=(this,pLVar8);
      lib::L2CValue::L2CValue(aLStack144,_LINK_NO_ARTICLE);
      FUN_7100067e30(aLStack64,param_1,aLStack144,aLStack128);
      lib::L2CValue::operator=(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar8 = aLStack96;
  }
  else {
LAB_71000654a0:
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar8 = aLStack112;
  }
  lib::L2CValue::~L2CValue(pLVar8);
LAB_71000654b0:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

