
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100026050(L2CFighterShizue *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  float fVar11;
  L2CValue aLStack336 [16];
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar3);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack160);
  uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
  lib::L2CValue::L2CValue(aLStack176,uVar4);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_LINE_LENGTH);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar5);
  }
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar11);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_CATEGORY);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack240,aLStack208);
  lib::L2CValue::L2CValue(aLStack256,aLStack224);
  FUN_71000241c0(aLStack80,aLStack240,aLStack256);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0xfa7c88e43);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    uVar9 = lib::L2CValue::as_integer(aLStack144);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::L2CValue(aLStack80,10.0);
    lib::L2CValue::operator*(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    uVar8 = lib::L2CValue::operator<=(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      app::LinkEvent::new_l2c_table();
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x1fb9f6228d);
      lib::L2CValue::operator=(pLVar10,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
      FUN_71000226c0(aLStack80,this,aLStack112,aLStack96);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x7ad7b88f7);
      lib::L2CValue::L2CValue(aLStack128,pLVar10);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CUT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_PICKUP);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710002673c;
    }
  }
  else {
    bVar2 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator==(aLStack272,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack304,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_HIT_STOP_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack288,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar8 = lib::L2CValue::operator==(aLStack288,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack336,aLStack192);
        lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack144,0x11dcc9aa0d);
        uVar8 = lib::L2CValue::as_integer(aLStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack144);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::L2CValue(aLStack80,10.0);
        lib::L2CValue::operator*(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        uVar8 = lib::L2CValue::operator<=(aLStack336,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack144,0xfa7c88e43);
          uVar8 = lib::L2CValue::as_integer(aLStack128);
          uVar9 = lib::L2CValue::as_integer(aLStack144);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar8,uVar9);
          lib::L2CValue::L2CValue(aLStack112,fVar11);
          lib::L2CValue::L2CValue(aLStack80,10.0);
          lib::L2CValue::operator*(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          uVar8 = lib::L2CValue::operator<=(aLStack336,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack320,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack320,true);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,true);
        }
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack320);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CATCH_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710002673c;
        }
        goto LAB_7100026528;
      }
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
    }
    lib::L2CValue::~L2CValue(aLStack272);
  }
LAB_7100026528:
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_HIT_WAIT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar8 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    bVar2 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar8 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xde29323e4);
      lib::L2CValue::L2CValue(aLStack112,0x1102fe80cd);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      FUN_710001c520(aLStack80,this,aLStack96,aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      FUN_7100007a10(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CUT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CUT);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_710002673c:
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

