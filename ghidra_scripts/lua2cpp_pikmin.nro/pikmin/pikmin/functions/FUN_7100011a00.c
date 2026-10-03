
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011a00(L2CFighterCommon *param_1)

{
  L2CValue *this;
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  LinkAttribute LVar6;
  int iVar7;
  L2CValue *pLVar8;
  FighterModuleAccessor *pFVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  Hash40 HVar12;
  float fVar13;
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
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_exec(param_1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_SYNC);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_DETACH);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar3 & 1U) == 0) {
      return;
    }
    FUN_7100008490(param_1);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_DETACH);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar4);
    lVar1 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_SYNC);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    this = &param_1->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    lib::L2CValue::L2CValue(aLStack80,1);
    pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Pikmin::hold_pikmin(pFVar9,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar9);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar10 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar10 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::LinkModule__link_impl(param_1->moduleAccessor,iVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar3 & 1U) != 0) {
      app::FighterPikminLinkEventWeaponPikminConstraint::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x32f654809c);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0xf2a5bf2be);
      lib::L2CValue::L2CValue(aLStack80,0x31ed91fca);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x92820810d);
      lib::L2CValue::L2CValue(aLStack80,0x31ed91fca);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,3);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0xaa79e68a2);
      lib::L2CValue::operator=(pLVar11,pLVar8);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      FUN_7100008280(aLStack144,param_1,aLStack80,aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      lib::L2CValue::L2CValue(aLStack160,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      LVar6 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::LinkModule__set_attribute_impl(param_1->moduleAccessor,iVar4,LVar6,true);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      lib::L2CValue::L2CValue(aLStack160,_LINK_ATTRIBUTE_REFERENCE_PARENT_ATTACK_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      LVar6 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::LinkModule__set_attribute_impl(param_1->moduleAccessor,iVar4,LVar6,true);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack160,0xc3495ada5);
      HVar12 = app::lua_bind::MotionModule__motion_kind_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,HVar12);
      lib::L2CValue::L2CValue(aLStack80,0xc33f869bc);
      uVar10 = lib::L2CValue::operator==(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar10 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xc33f869bc);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      HVar12 = app::lua_bind::MotionModule__motion_kind_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,HVar12);
      lib::L2CValue::L2CValue(aLStack80,0xdde67d935);
      uVar10 = lib::L2CValue::operator==(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar10 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xdde67d935);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      HVar12 = app::lua_bind::MotionModule__motion_kind_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,HVar12);
      lib::L2CValue::L2CValue(aLStack80,0xd40042152);
      uVar10 = lib::L2CValue::operator==(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar10 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xd40042152);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      app::FighterPikminLinkEventWeaponPikminChangeMotion::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x35db0aba70);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0xc3e3c1ede);
      lib::L2CValue::operator=(pLVar8,aLStack160);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0xc06797249);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x5760cc7df);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x56ec5338a);
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,3);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0xaa79e68a2);
      lib::L2CValue::operator=(pLVar11,pLVar8);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      FUN_7100008280(aLStack192,param_1,aLStack80,aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack80);
      app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar4 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_ATTACK_AIR;
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0xc21b85cd4);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,3);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0xaa79e68a2);
      lib::L2CValue::operator=(pLVar11,pLVar8);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      FUN_7100008280(aLStack224,param_1,aLStack80,aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack80);
      app::FighterPikminLinkEventWeaponPikminSyncLR::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x2f9f0da252);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      fVar13 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar13);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x35851bc47);
      lib::L2CValue::operator=(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,3);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0xaa79e68a2);
      lib::L2CValue::operator=(pLVar11,pLVar8);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      FUN_7100008280(aLStack256,param_1,aLStack80,aLStack240);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_INT_HAVE_PIKMIN);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar7 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar4,iVar7);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lVar1 = -0x60;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  return;
}

